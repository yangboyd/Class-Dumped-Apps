//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPresenter.h"

#import "ObjectObserverProtocol-Protocol.h"

@class MainScreenMultiTab, Multi, NSString;
@protocol MainScreenMultiFeedPresentable;

@interface MainScreenMultiFeedPresenter : FeedPresenter <ObjectObserverProtocol>
{
    Multi *_multi;
    MainScreenMultiTab *_multiTab;
}

@property(retain, nonatomic) MainScreenMultiTab *multiTab; // @synthesize multiTab=_multiTab;
@property(retain, nonatomic) Multi *multi; // @synthesize multi=_multi;
- (void).cxx_destruct;
- (void)updateContentViewsForData:(id)arg1;
- (id)createListingNetworkSourceWithURLString:(id)arg1 parameters:(id)arg2;
- (void)configureWithMulti:(id)arg1;
- (void)configureWithMultiTab:(id)arg1;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <MainScreenMultiFeedPresentable> presentable; // @dynamic presentable;
@property(readonly) Class superclass;

@end

