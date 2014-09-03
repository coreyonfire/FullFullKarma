/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMBootstrapSettings : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__serviceHost;
    NSString *__marketingUrl;
    NSString *__supportUrl;
    NSString *__accountEmailDomain;
    BOOL __enableFacebookSharing;
    BOOL __enableGiftSubscriptions;
    BOOL __enableSupportTickets;
    BOOL __enableSharedNotebooks;
    BOOL __enableSingleNoteSharing;
    BOOL __enableSponsoredAccounts;
    BOOL __enableTwitterSharing;
    BOOL __enableLinkedInSharing;
    BOOL __enablePublicNotebooks;
    BOOL __serviceHost_isset;
    BOOL __marketingUrl_isset;
    BOOL __supportUrl_isset;
    BOOL __accountEmailDomain_isset;
    BOOL __enableFacebookSharing_isset;
    BOOL __enableGiftSubscriptions_isset;
    BOOL __enableSupportTickets_isset;
    BOOL __enableSharedNotebooks_isset;
    BOOL __enableSingleNoteSharing_isset;
    BOOL __enableSponsoredAccounts_isset;
    BOOL __enableTwitterSharing_isset;
    BOOL __enableLinkedInSharing_isset;
    BOOL __enablePublicNotebooks_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetEnablePublicNotebooks;
- (BOOL)enablePublicNotebooksIsSet;
- (void)setEnablePublicNotebooks:(BOOL)fp8;
- (BOOL)enablePublicNotebooks;
- (void)unsetEnableLinkedInSharing;
- (BOOL)enableLinkedInSharingIsSet;
- (void)setEnableLinkedInSharing:(BOOL)fp8;
- (BOOL)enableLinkedInSharing;
- (void)unsetEnableTwitterSharing;
- (BOOL)enableTwitterSharingIsSet;
- (void)setEnableTwitterSharing:(BOOL)fp8;
- (BOOL)enableTwitterSharing;
- (void)unsetEnableSponsoredAccounts;
- (BOOL)enableSponsoredAccountsIsSet;
- (void)setEnableSponsoredAccounts:(BOOL)fp8;
- (BOOL)enableSponsoredAccounts;
- (void)unsetEnableSingleNoteSharing;
- (BOOL)enableSingleNoteSharingIsSet;
- (void)setEnableSingleNoteSharing:(BOOL)fp8;
- (BOOL)enableSingleNoteSharing;
- (void)unsetEnableSharedNotebooks;
- (BOOL)enableSharedNotebooksIsSet;
- (void)setEnableSharedNotebooks:(BOOL)fp8;
- (BOOL)enableSharedNotebooks;
- (void)unsetEnableSupportTickets;
- (BOOL)enableSupportTicketsIsSet;
- (void)setEnableSupportTickets:(BOOL)fp8;
- (BOOL)enableSupportTickets;
- (void)unsetEnableGiftSubscriptions;
- (BOOL)enableGiftSubscriptionsIsSet;
- (void)setEnableGiftSubscriptions:(BOOL)fp8;
- (BOOL)enableGiftSubscriptions;
- (void)unsetEnableFacebookSharing;
- (BOOL)enableFacebookSharingIsSet;
- (void)setEnableFacebookSharing:(BOOL)fp8;
- (BOOL)enableFacebookSharing;
- (void)unsetAccountEmailDomain;
- (BOOL)accountEmailDomainIsSet;
- (void)setAccountEmailDomain:(id)fp8;
- (id)accountEmailDomain;
- (void)unsetSupportUrl;
- (BOOL)supportUrlIsSet;
- (void)setSupportUrl:(id)fp8;
- (id)supportUrl;
- (void)unsetMarketingUrl;
- (BOOL)marketingUrlIsSet;
- (void)setMarketingUrl:(id)fp8;
- (id)marketingUrl;
- (void)unsetServiceHost;
- (BOOL)serviceHostIsSet;
- (void)setServiceHost:(id)fp8;
- (id)serviceHost;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithServiceHost:(id)fp8 marketingUrl:(id)fp12 supportUrl:(id)fp16 accountEmailDomain:(id)fp20 enableFacebookSharing:(BOOL)fp24 enableGiftSubscriptions:(BOOL)fp28 enableSupportTickets:(BOOL)fp32 enableSharedNotebooks:(BOOL)fp36 enableSingleNoteSharing:(BOOL)fp40 enableSponsoredAccounts:(BOOL)fp44 enableTwitterSharing:(BOOL)fp48 enableLinkedInSharing:(BOOL)fp52 enablePublicNotebooks:(BOOL)fp56;
- (id)init;

@end

