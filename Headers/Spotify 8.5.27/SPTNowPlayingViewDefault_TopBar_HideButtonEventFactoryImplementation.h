//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingViewDefault_TopBar_HideButtonEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTNowPlayingViewDefault_TopBar_HideButtonEventFactoryImplementation : NSObject <SPTNowPlayingViewDefault_TopBar_HideButtonEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithComponents:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitUiHide;
- (id)impression;
- (id)initWithComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

