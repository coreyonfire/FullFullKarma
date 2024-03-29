/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMAccounting : _AVAudioSessionCategoryPlayback <NSCoding>
{
    long long __uploadLimit;
    long long __uploadLimitEnd;
    long long __uploadLimitNextMonth;
    int __premiumServiceStatus;
    NSString *__premiumOrderNumber;
    NSString *__premiumCommerceService;
    long long __premiumServiceStart;
    NSString *__premiumServiceSKU;
    long long __lastSuccessfulCharge;
    long long __lastFailedCharge;
    NSString *__lastFailedChargeReason;
    long long __nextPaymentDue;
    long long __premiumLockUntil;
    long long __updated;
    NSString *__premiumSubscriptionNumber;
    long long __lastRequestedCharge;
    NSString *__currency;
    int __unitPrice;
    int __businessId;
    NSString *__businessName;
    int __businessRole;
    int __unitDiscount;
    long long __nextChargeDate;
    BOOL __uploadLimit_isset;
    BOOL __uploadLimitEnd_isset;
    BOOL __uploadLimitNextMonth_isset;
    BOOL __premiumServiceStatus_isset;
    BOOL __premiumOrderNumber_isset;
    BOOL __premiumCommerceService_isset;
    BOOL __premiumServiceStart_isset;
    BOOL __premiumServiceSKU_isset;
    BOOL __lastSuccessfulCharge_isset;
    BOOL __lastFailedCharge_isset;
    BOOL __lastFailedChargeReason_isset;
    BOOL __nextPaymentDue_isset;
    BOOL __premiumLockUntil_isset;
    BOOL __updated_isset;
    BOOL __premiumSubscriptionNumber_isset;
    BOOL __lastRequestedCharge_isset;
    BOOL __currency_isset;
    BOOL __unitPrice_isset;
    BOOL __businessId_isset;
    BOOL __businessName_isset;
    BOOL __businessRole_isset;
    BOOL __unitDiscount_isset;
    BOOL __nextChargeDate_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetNextChargeDate;
- (BOOL)nextChargeDateIsSet;
- (void)setNextChargeDate:(long long)fp8;
- (long long)nextChargeDate;
- (void)unsetUnitDiscount;
- (BOOL)unitDiscountIsSet;
- (void)setUnitDiscount:(int)fp8;
- (int)unitDiscount;
- (void)unsetBusinessRole;
- (BOOL)businessRoleIsSet;
- (void)setBusinessRole:(int)fp8;
- (int)businessRole;
- (void)unsetBusinessName;
- (BOOL)businessNameIsSet;
- (void)setBusinessName:(id)fp8;
- (id)businessName;
- (void)unsetBusinessId;
- (BOOL)businessIdIsSet;
- (void)setBusinessId:(int)fp8;
- (int)businessId;
- (void)unsetUnitPrice;
- (BOOL)unitPriceIsSet;
- (void)setUnitPrice:(int)fp8;
- (int)unitPrice;
- (void)unsetCurrency;
- (BOOL)currencyIsSet;
- (void)setCurrency:(id)fp8;
- (id)currency;
- (void)unsetLastRequestedCharge;
- (BOOL)lastRequestedChargeIsSet;
- (void)setLastRequestedCharge:(long long)fp8;
- (long long)lastRequestedCharge;
- (void)unsetPremiumSubscriptionNumber;
- (BOOL)premiumSubscriptionNumberIsSet;
- (void)setPremiumSubscriptionNumber:(id)fp8;
- (id)premiumSubscriptionNumber;
- (void)unsetUpdated;
- (BOOL)updatedIsSet;
- (void)setUpdated:(long long)fp8;
- (long long)updated;
- (void)unsetPremiumLockUntil;
- (BOOL)premiumLockUntilIsSet;
- (void)setPremiumLockUntil:(long long)fp8;
- (long long)premiumLockUntil;
- (void)unsetNextPaymentDue;
- (BOOL)nextPaymentDueIsSet;
- (void)setNextPaymentDue:(long long)fp8;
- (long long)nextPaymentDue;
- (void)unsetLastFailedChargeReason;
- (BOOL)lastFailedChargeReasonIsSet;
- (void)setLastFailedChargeReason:(id)fp8;
- (id)lastFailedChargeReason;
- (void)unsetLastFailedCharge;
- (BOOL)lastFailedChargeIsSet;
- (void)setLastFailedCharge:(long long)fp8;
- (long long)lastFailedCharge;
- (void)unsetLastSuccessfulCharge;
- (BOOL)lastSuccessfulChargeIsSet;
- (void)setLastSuccessfulCharge:(long long)fp8;
- (long long)lastSuccessfulCharge;
- (void)unsetPremiumServiceSKU;
- (BOOL)premiumServiceSKUIsSet;
- (void)setPremiumServiceSKU:(id)fp8;
- (id)premiumServiceSKU;
- (void)unsetPremiumServiceStart;
- (BOOL)premiumServiceStartIsSet;
- (void)setPremiumServiceStart:(long long)fp8;
- (long long)premiumServiceStart;
- (void)unsetPremiumCommerceService;
- (BOOL)premiumCommerceServiceIsSet;
- (void)setPremiumCommerceService:(id)fp8;
- (id)premiumCommerceService;
- (void)unsetPremiumOrderNumber;
- (BOOL)premiumOrderNumberIsSet;
- (void)setPremiumOrderNumber:(id)fp8;
- (id)premiumOrderNumber;
- (void)unsetPremiumServiceStatus;
- (BOOL)premiumServiceStatusIsSet;
- (void)setPremiumServiceStatus:(int)fp8;
- (int)premiumServiceStatus;
- (void)unsetUploadLimitNextMonth;
- (BOOL)uploadLimitNextMonthIsSet;
- (void)setUploadLimitNextMonth:(long long)fp8;
- (long long)uploadLimitNextMonth;
- (void)unsetUploadLimitEnd;
- (BOOL)uploadLimitEndIsSet;
- (void)setUploadLimitEnd:(long long)fp8;
- (long long)uploadLimitEnd;
- (void)unsetUploadLimit;
- (BOOL)uploadLimitIsSet;
- (void)setUploadLimit:(long long)fp8;
- (long long)uploadLimit;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithUploadLimit:(long long)fp8 uploadLimitEnd:(long long)fp16 uploadLimitNextMonth:(long long)fp24 premiumServiceStatus:(int)fp32 premiumOrderNumber:(id)fp36 premiumCommerceService:(id)fp40 premiumServiceStart:(long long)fp44 premiumServiceSKU:(id)fp52 lastSuccessfulCharge:(long long)fp56 lastFailedCharge:(long long)fp64 lastFailedChargeReason:(id)fp72 nextPaymentDue:(long long)fp76 premiumLockUntil:(long long)fp84 updated:(long long)fp92 premiumSubscriptionNumber:(id)fp100 lastRequestedCharge:(long long)fp104 currency:(id)fp112 unitPrice:(int)fp116 businessId:(int)fp120 businessName:(id)fp124 businessRole:(int)fp128 unitDiscount:(int)fp132 nextChargeDate:(long long)fp136;
- (id)init;

@end

