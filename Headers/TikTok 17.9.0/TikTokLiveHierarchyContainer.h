//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TikTokLiveHierarchyContainerProtocol-Protocol.h"

@class NSString, UIView;
@protocol IESLiveHierarchyContainerView;

@interface TikTokLiveHierarchyContainer : NSObject <TikTokLiveHierarchyContainerProtocol>
{
    UIView<IESLiveHierarchyContainerView> *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<IESLiveHierarchyContainerView> *containerView; // @synthesize containerView=_containerView;
- (id)view;
- (id)viewForIdentifier:(id)arg1;
- (_Bool)containsSubview:(id)arg1;
- (void)addSubview:(id)arg1 identifier:(id)arg2;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

