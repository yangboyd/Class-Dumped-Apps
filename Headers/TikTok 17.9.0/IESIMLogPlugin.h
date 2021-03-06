//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMAppIMLogProtocol-Protocol.h"
#import "TIMLogService-Protocol.h"

@class NSString;
@protocol IESIMLogPluginDelegate;

@interface IESIMLogPlugin : NSObject <TIMAppIMLogProtocol, TIMLogService>
{
    _Bool _enableSDKTrackPerformance;
    id <IESIMLogPluginDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableSDKTrackPerformance; // @synthesize enableSDKTrackPerformance=_enableSDKTrackPerformance;
@property(nonatomic) __weak id <IESIMLogPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logMessage:(id)arg1 withLevel:(unsigned long long)arg2 withTag:(id)arg3 withFileName:(id)arg4 withFuncName:(id)arg5 withLine:(int)arg6;
- (id)convertToJsonDict:(id)arg1;
- (void)logService:(id)arg1 name:(id)arg2 data:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

