//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuUUIDStreamItem.h"

@class ASTMenuSelectionIconItem, ASTMenuTextButtonItem, ASTMenuWebImageItem, NSString;

@interface ASTMenuMusicStreamItem : ASTMenuUUIDStreamItem
{
    _Bool _selected;
    _Bool _linked;
    _Bool _hasShadow;
    ASTMenuSelectionIconItem *_selectionIconItem;
    NSString *_title;
    NSString *_subtitle;
    NSString *_warning;
    ASTMenuTextButtonItem *_accessoryButton;
    ASTMenuWebImageItem *_iconImage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(retain, nonatomic) ASTMenuWebImageItem *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) ASTMenuTextButtonItem *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(copy, nonatomic) NSString *warning; // @synthesize warning=_warning;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ASTMenuSelectionIconItem *selectionIconItem; // @synthesize selectionIconItem=_selectionIconItem;
@property(nonatomic, getter=isLinked) _Bool linked; // @synthesize linked=_linked;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) NSString *currentSelectionIconImageName;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

