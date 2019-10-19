//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASLayoutElement-Protocol.h"

@class ASCollectionElement, ASLayoutElementStyle, NSString;

@interface _ASGalleryLayoutItem : NSObject <ASLayoutElement>
{
    ASLayoutElementStyle *style;
    ASCollectionElement *_collectionElement;
    struct CGSize _itemSize;
    CDStruct_104667ad _primitiveTraitCollection;
}

@property CDStruct_104667ad primitiveTraitCollection; // @synthesize primitiveTraitCollection=_primitiveTraitCollection;
@property(readonly, nonatomic) __weak ASCollectionElement *collectionElement; // @synthesize collectionElement=_collectionElement;
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) ASLayoutElementStyle *style; // @synthesize style;
- (void).cxx_destruct;
- (id)asciiArtName;
- (id)asciiArtString;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1 restrictedToSize:(CDStruct_99d2e400)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)layoutThatFits:(CDStruct_42a63532)arg1 parentSize:(struct CGSize)arg2;
- (id)layoutThatFits:(CDStruct_42a63532)arg1;
- (struct CGSize)measure:(CDStruct_42a63532)arg1;
- (_Bool)implementsLayoutMethod;
- (id)sublayoutElements;
@property(readonly, nonatomic) unsigned char layoutElementType;
- (id)asyncTraitCollection;
- (struct UIEdgeInsets)layoutOptionExtensionEdgeInsetsAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionEdgeInsets:(struct UIEdgeInsets)arg1 atIndex:(int)arg2;
- (long long)layoutOptionExtensionIntegerAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionInteger:(long long)arg1 atIndex:(int)arg2;
- (_Bool)layoutOptionExtensionBoolAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionBool:(_Bool)arg1 atIndex:(int)arg2;
- (id)initWithItemSize:(struct CGSize)arg1 collectionElement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

