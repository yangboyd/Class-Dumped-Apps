//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SLKWebSocketEventManagerInterface-Protocol.h"

@interface SLKWebSocketEventManager : NSObject <SLKWebSocketEventManagerInterface>
{
    // Error parsing type: , name: currentTeamId
    // Error parsing type: , name: persistentStore
    // Error parsing type: , name: handlers
    // Error parsing type: , name: eventHandlingQueue
    // Error parsing type: , name: bufferedQueue
    // Error parsing type: , name: metrics
    // Error parsing type: , name: tracer
    // Error parsing type: , name: shouldBufferEvents
}

- (void).cxx_destruct;
- (id)init;
- (void)eventsReceived:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCurrentTeamId:(id)arg1 dependencies:(id)arg2;

@end

