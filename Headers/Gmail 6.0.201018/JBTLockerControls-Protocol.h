//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTLockerControls_UiControlsStrings, NSString;
@protocol JBTLockerControls_Builder;

@protocol JBTLockerControls <JavaObject>
- (_Bool)isEqual:(id)arg1;
- (id <JBTLockerControls_Builder>)toBuilder;
- (NSString *)getUiControlsStringWithJBTLockerControls_UiControlsStrings:(JBTLockerControls_UiControlsStrings *)arg1;
- (NSString *)getRestrictionsDescriptionWithBoolean:(_Bool)arg1;
- (NSString *)getRestrictionsMessage;
- (NSString *)getExpirationMessage;
- (_Bool)isExpired;
- (_Bool)isSent;
- (long long)getExpirationTtlSec;
- (long long)getExpirationTimeSec;
- (_Bool)getRequireSmsAuth;
- (_Bool)getDeleteAfterExpiry;
- (_Bool)getDisableCopyPasteOptions;
- (_Bool)getDisableDownloadAndPrintOptions;
@end

