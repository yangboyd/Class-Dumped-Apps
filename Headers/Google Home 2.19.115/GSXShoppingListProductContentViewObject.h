//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOContentViewObject-Protocol.h"
#import "GSXShoppingListItemContentViewObject-Protocol.h"
#import "SECCollectionViewFlowContentViewObject-Protocol.h"

@class GSXShoppingListItemV2, GSXShoppingListProductContentView, NSString, UIViewController;
@protocol GSXShoppingListItemToggleStateDelegate><GSXShoppingListProductEditingDelegate;

@interface GSXShoppingListProductContentViewObject : NSObject <GOOContentViewObject, GSXShoppingListItemContentViewObject, SECCollectionViewFlowContentViewObject>
{
    UIViewController<GSXShoppingListItemToggleStateDelegate><GSXShoppingListProductEditingDelegate> *_delegate;
    GSXShoppingListItemV2 *_shoppingListItem;
    GSXShoppingListProductContentView *_contentView;
}

+ (id)objectWithShoppingListItem:(id)arg1 delegate:(id)arg2;
@property(nonatomic) __weak GSXShoppingListProductContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) GSXShoppingListItemV2 *shoppingListItem; // @synthesize shoppingListItem=_shoppingListItem;
@property(nonatomic) __weak UIViewController<GSXShoppingListItemToggleStateDelegate><GSXShoppingListProductEditingDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool checked;
- (Class)contentViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

