//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHermesController;
@protocol SPTOauthClient;

@interface _TtC23ConnectivityFeatureImpl26ConnectivitySessionService : NSObject
{
    // Error parsing type: , name: _sessionService
    // Error parsing type: , name: _connectivityService
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) id <SPTOauthClient> oauthClient;
@property(nonatomic, readonly) SPTHermesController *hermesController;
- (void)unload;
- (void)load;

@end

