//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPresentationTrackableViewProtocol-Protocol.h"
#import "NFUIReusableViewDelegatesProtocol-Protocol.h"

@class NSArray, NSIndexPath, NSNumber;
@protocol NFUIFamiliarityModelProtocol, NFUIReusableViewModelProtocol;

@protocol NFUIReusableViewProtocol <NFUIReusableViewDelegatesProtocol, NFUIPresentationTrackableViewProtocol>
@property(nonatomic) _Bool isLayoutPass;
@property(nonatomic) _Bool hasInlineVideo;
@property(retain, nonatomic) id <NFUIReusableViewModelProtocol> viewModel;
@property(nonatomic) __weak id delegate;

@optional
+ (id <NFUIReusableViewModelProtocol>)viewModelForListModel:(id <NFUIFamiliarityModelProtocol>)arg1 withIndexPath:(NSIndexPath *)arg2;
+ (id <NFUIReusableViewModelProtocol>)viewModelForEntityId:(NSNumber *)arg1;
@property(nonatomic) _Bool shouldBlockDetailsAction;
@property(nonatomic) _Bool shouldSkipViewModelCreationWhenSizing;
- (void)cancelImageLoad;
- (void)reloadViewModelForVideos:(NSArray *)arg1;
- (void)reloadViewModel;
- (void)resetState;
@end

