//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEPacketTunnelProvider.h>

@interface _TtC12OpenVPNApple18OVPNTunnelProvider : NEPacketTunnelProvider
{
    // Error parsing type: , name: generatedConfigFileName
    // Error parsing type: , name: pendingStartHandler
    // Error parsing type: , name: pendingSleepHandler
    // Error parsing type: , name: pendingStopHandler
    // Error parsing type: , name: configObserver
    // Error parsing type: , name: currentOVPNState
    // Error parsing type: , name: reachability
    // Error parsing type: , name: ovpnServiceQueue
}

- (void).cxx_destruct;
- (void)stopTunnelWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

