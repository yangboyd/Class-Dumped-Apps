//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GILClientVisualElement, NSArray, UIView;

@protocol GILHierarchyProvider <NSObject>
@property(readonly, nonatomic) UIView *associatedView;
@property(readonly, nonatomic) long long visibility;
@property(readonly, nonatomic, getter=isSynthetic) _Bool synthetic;
- (GILClientVisualElement *)parentClientVisualElement;
- (NSArray *)childClientVisualElements;
@end

