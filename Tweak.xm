#import <UIKit/UIKit.h>
/** STUFF FOR THE MAIN PAGE FULL KARMA **/
@interface RedditAPI : NSObject {
    int karmaLink;
	int karmaComment;
    NSString* authenticatedUser;
}
@property(assign) int karmaComment;
@property(assign) int karmaLink;
@property(retain) NSString* authenticatedUser;
@end

@interface AlienBlueAppDelegate : NSObject {
    RedditAPI* redditAPI;
}
@property(retain) RedditAPI* redditAPI;
@end

@interface JMOutlineViewController : UIViewController
@end

@interface ABOutlineViewController : JMOutlineViewController
@end

@interface RedditsViewController : ABOutlineViewController
-(id)titleForUserProfileSection;
@end


/** STUFF FOR THE POST CELLS FULL KARMA **/

@interface VotableElement : NSObject
@end

@interface Post : VotableElement
{
    int score_;
}
@property(assign) int score_;
- (int)score;
@end

/** STUFF FOR THE POST VIEW FULL KARMA **/


/** main page hook **/
%hook RedditsViewController

-(id)titleForUserProfileSection {
    RedditAPI *adAPI = [(AlienBlueAppDelegate *)[[UIApplication sharedApplication] delegate] redditAPI];
    int ckarma = [adAPI karmaComment];
    int lkarma = [adAPI karmaLink];
    NSString *user = [adAPI authenticatedUser];
    return [NSString stringWithFormat:@"%@ (%d : %d)", user, lkarma, ckarma];
}

%end

/** post cell hook **/
%hook Post

- (int)score
{
    //int karmaPoints = [self score_];
    return [self score_];
}
%end

