//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGMedia, NSArray;
@protocol IGIntentTransitionFocusItem;

@protocol IGDiscoveryGridItemType <NSCopying, IGListDiffable>
@property(readonly, nonatomic) IGMedia *media;
- (id <IGIntentTransitionFocusItem>)intentTransitionFocusItem;
- (NSArray *)associatedMedia:(_Bool)arg1;
@end

