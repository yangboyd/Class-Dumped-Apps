//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol _TtP11FeatureAPIs18ConnectTransaction_
- (long long)fuelTransactionStatus;
- (_Bool)isFuel;
@property(nonatomic, readonly) NSArray *fraudAlertInstructions;
@property(nonatomic, readonly) NSString *fraudAlertMessage;
@property(nonatomic, readonly) NSString *transactionAbortWarningMessage;
@property(nonatomic, readonly) NSString *transactionAbortWarningTitle;
- (_Bool)isWalmartPayTransaction;
- (_Bool)isAborted;
- (_Bool)hasFraudAlert;
- (_Bool)isFuelTransaction;
@end

