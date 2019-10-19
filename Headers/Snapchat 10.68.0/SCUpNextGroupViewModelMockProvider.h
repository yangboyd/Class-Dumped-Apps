//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpNextGroupViewModelProvider-Protocol.h"

@class NSArray, NSString, SCUpNextGroupViewModelProviderListenerAnnouncer;

@interface SCUpNextGroupViewModelMockProvider : NSObject <SCUpNextGroupViewModelProvider>
{
    SCUpNextGroupViewModelProviderListenerAnnouncer *_announcer;
    NSArray *_viewModels;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void).cxx_destruct;
- (id)announcer;
- (id)initWithViewModels:(id)arg1 currentIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

