//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/RoutingAlert-Protocol.h>

@class NSString;

@interface GMSx_SuppressedRoutingAlert : NSObject <RoutingAlert>
{
}

- (_Bool)requiresAudioFocus;
- (_Bool)isMuted;
- (void)unmute;
- (void)mute;
- (double)duration;
- (void)playWithDoneCallback:(CDUnknownBlockType)arg1;
- (void)cleanup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

