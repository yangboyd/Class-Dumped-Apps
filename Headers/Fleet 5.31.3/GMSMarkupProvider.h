//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSEntityProvider-Protocol.h"

@class GMSServerResourceManager, NSString;
@protocol GMSEntityUIHandler;

@interface GMSMarkupProvider : NSObject <GMSEntityProvider>
{
    reffed_ptr_913e2e02 _behavior;
    GMSServerResourceManager *_resourceManager;
    id <GMSEntityUIHandler> _entityUIHandler;
    id _tapTarget;
    SEL _tapSelector;
    char *_passID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)entityUIHandler;
- (void)wasReleasedFromEntityUIHandler:(id)arg1;
- (void)wasBoundToEntityUIHandler:(id)arg1;
- (void)willDestroyRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didCreateRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 resources:(id)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;
- (_Bool)supportsMetal;
- (void)itemTapped:(unsigned long long)arg1;
- (double)timeBeforeRevealCompletesForItemWithID:(unsigned long long)arg1;
- (double)timeBeforeRevealStartsForItemWithID:(unsigned long long)arg1;
- (void)cancelRevealAnimationForItemWithID:(unsigned long long)arg1;
- (void)setRevealedDistance:(double)arg1 forItemWithID:(unsigned long long)arg2;
- (void)setConsumedDistance:(double)arg1 forItemWithID:(unsigned long long)arg2;
- (void)setTapHandler:(id)arg1 selector:(SEL)arg2;
- (void)clearItems;
- (void)removeItemWithID:(unsigned long long)arg1;
- (unsigned long long)setLines:(id)arg1 styleTable:(id)arg2 tappable:(_Bool)arg3 priority:(unsigned int)arg4 itemID:(unsigned long long)arg5 tapPriority:(struct GMSEntityTapPriority)arg6 minZoom:(float)arg7 imageDictionary:(id)arg8;
- (unsigned long long)setIcon:(struct WrappedRectangle2D *)arg1 style:(id)arg2 tappable:(_Bool)arg3 priority:(unsigned int)arg4 itemID:(unsigned long long)arg5 name:(basic_string_90719d97 *)arg6 tapPriority:(struct GMSEntityTapPriority)arg7;
- (unsigned long long)setPolygon:(id)arg1 style:(id)arg2 tappable:(_Bool)arg3 scaleMode:(int)arg4 priority:(unsigned int)arg5 itemID:(unsigned long long)arg6 tapPriority:(struct GMSEntityTapPriority)arg7;
- (unsigned long long)setPolylines:(const vector_78334dae *)arg1 revealOptions:(struct MarkupRevealOptions)arg2 tappable:(_Bool)arg3 scaleMode:(int)arg4 priority:(unsigned int)arg5 itemID:(unsigned long long)arg6 tapPriority:(struct GMSEntityTapPriority)arg7;
- (unsigned long long)setPolyline:(id)arg1 fixedIndices:(const set_7b7d70f4 *)arg2 style:(id)arg3 startCap:(unsigned int)arg4 endCap:(unsigned int)arg5 sprite:(const struct MarkupSprite *)arg6 revealOptions:(struct MarkupRevealOptions)arg7 tappable:(_Bool)arg8 scaleMode:(int)arg9 priority:(unsigned int)arg10 itemID:(unsigned long long)arg11 tapPriority:(struct GMSEntityTapPriority)arg12;
- (unsigned long long)setPolyline:(id)arg1 fixedIndices:(const set_7b7d70f4 *)arg2 style:(id)arg3 startCap:(unsigned int)arg4 endCap:(unsigned int)arg5 revealOptions:(struct MarkupRevealOptions)arg6 tappable:(_Bool)arg7 scaleMode:(int)arg8 priority:(unsigned int)arg9 itemID:(unsigned long long)arg10 tapPriority:(struct GMSEntityTapPriority)arg11;
- (unsigned long long)setPolyline:(id)arg1 style:(const vector_c36147bd *)arg2 textureImage:(id)arg3 width:(float)arg4 revealOptions:(struct MarkupRevealOptions)arg5 tappable:(_Bool)arg6 priority:(unsigned int)arg7 itemID:(unsigned long long)arg8 tapPriority:(struct GMSEntityTapPriority)arg9;
- (id)initWithPassID:(const char **)arg1 resourceManager:(id)arg2;
- (reffed_ptr_913e2e02)behavior;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

