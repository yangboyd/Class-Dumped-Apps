//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBIntentTarget-Protocol.h>

@class NSOrderedSet, NSString;
@protocol IGFavoritesHomeViewControllerDelegate;

@interface IGFavoritesHomeUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _canShowNux;
    NSOrderedSet *_prefetchedFavoritesList;
    long long _entryPoint;
    id <IGFavoritesHomeViewControllerDelegate> _delegate;
    long long _deeplinkedFirstShareMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long deeplinkedFirstShareMode; // @synthesize deeplinkedFirstShareMode=_deeplinkedFirstShareMode;
@property(readonly, nonatomic) _Bool canShowNux; // @synthesize canShowNux=_canShowNux;
@property(readonly, nonatomic) id <IGFavoritesHomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) NSOrderedSet *prefetchedFavoritesList; // @synthesize prefetchedFavoritesList=_prefetchedFavoritesList;
- (id)initWithPrefetchedFavoritesList:(id)arg1 entryPoint:(long long)arg2 delegate:(id)arg3 canShowNux:(_Bool)arg4 deeplinkedFirstShareMode:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

