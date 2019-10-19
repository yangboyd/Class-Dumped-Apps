//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol HUBViewModel, SPTSearchPlatformContextDelegate;

@protocol SPTSearchPlatformContext <NSObject>
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) id <HUBViewModel> viewModel;
@property(readonly, copy, nonatomic) NSString *query;
@property(nonatomic) __weak id <SPTSearchPlatformContextDelegate> delegate;
- (void)loadNextPage;
- (void)reload;
@end

