//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"

@class NSSet, SPTHomeUIComponentDependencies;

@interface SPTHomeUIDimmedViewComponent : HUGSThemableComponent <HUBComponent>
{
    SPTHomeUIComponentDependencies *_dependencies;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeUIComponentDependencies *dependencies; // @synthesize dependencies=_dependencies;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithDependencies:(id)arg1;

@end

