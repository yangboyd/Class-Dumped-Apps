//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SlackDevTools/_TtP13SlackDevTools19HUDManagerInterface_-Protocol.h>

@interface _TtC13SlackDevTools10HUDManager : NSObject <_TtP13SlackDevTools19HUDManagerInterface_>
{
    // Error parsing type: , name: isShowing
    // Error parsing type: , name: fpsCalculator
    // Error parsing type: , name: hudWindow
    // Error parsing type: , name: hudInstrument
}

+ (id)shared;
- (void).cxx_destruct;
- (void)emitSlogWithName:(id)arg1 contents:(id)arg2;
- (void)emitBeaconEventWithName:(id)arg1 contents:(id)arg2;
- (void)emitWebsocketReceivedEventWithType:(id)arg1 subtype:(id)arg2 contents:(id)arg3;
- (void)emitApiCallWithEndpoint:(id)arg1 requestSizeInBytes:(long long)arg2 responseSizeInBytes:(long long)arg3 method:(id)arg4 durationInMs:(long long)arg5 requestHeaders:(id)arg6 requestData:(id)arg7 responseData:(id)arg8 statusCode:(long long)arg9;
- (void)recordFrameDraw:(double)arg1;
- (void)updateTheme;
- (void)hide;
- (void)show;
- (id)init;

@end

