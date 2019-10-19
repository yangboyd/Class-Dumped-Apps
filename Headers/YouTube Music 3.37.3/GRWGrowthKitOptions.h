//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSString;
@protocol GRWAuthenticationDelegate, GRWMessagingDelegate, SSOService;

@interface GRWGrowthKitOptions : NSObject
{
    NSBundle *_hostBundle;
    id <GRWMessagingDelegate> _messagingDelegate;
    id <GRWAuthenticationDelegate> _authDelegate;
    long long _UIStyleMode;
    NSArray *_components;
    NSString *_APIKey;
    id <SSOService> _authService;
}

@property(readonly, nonatomic) id <SSOService> authService; // @synthesize authService=_authService;
@property(readonly, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(readonly, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, nonatomic) long long UIStyleMode; // @synthesize UIStyleMode=_UIStyleMode;
@property(nonatomic) __weak id <GRWAuthenticationDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
@property(nonatomic) __weak id <GRWMessagingDelegate> messagingDelegate; // @synthesize messagingDelegate=_messagingDelegate;
@property(retain, nonatomic) NSBundle *hostBundle; // @synthesize hostBundle=_hostBundle;
- (void).cxx_destruct;
- (id)initWithComponents:(id)arg1 APIKey:(id)arg2 authService:(id)arg3 UIStyleMode:(long long)arg4;

@end

