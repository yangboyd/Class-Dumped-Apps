//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPTXFutures_OnFailureCallback-Protocol.h"

@class ComGoogleCommonUtilConcurrentSettableFuture, NSString;

@interface ComGoogleAppsBigtopDataItemsChangesApplyChangeIntentsRequestHandler_$Lambda$3 : NSObject <XPTXFutures_OnFailureCallback>
{
    ComGoogleCommonUtilConcurrentSettableFuture *val$savedToStore_;
}

- (void)dealloc;
- (void)onFailureWithJavaLangThrowable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

