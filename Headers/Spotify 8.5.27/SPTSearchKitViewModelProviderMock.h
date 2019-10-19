//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchKitViewModelProvider-Protocol.h"

@class NSString, SPTSearchKitViewModel;
@protocol SPTSearchKitViewModelProviderDelegate;

@interface SPTSearchKitViewModelProviderMock : NSObject <SPTSearchKitViewModelProvider>
{
    id <SPTSearchKitViewModelProviderDelegate> _delegate;
    NSString *_query;
    SPTSearchKitViewModel *_viewModel;
    CDUnknownBlockType _onSetQuery;
}

@property(copy, nonatomic) CDUnknownBlockType onSetQuery; // @synthesize onSetQuery=_onSetQuery;
@property(copy, nonatomic) SPTSearchKitViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) __weak id <SPTSearchKitViewModelProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

