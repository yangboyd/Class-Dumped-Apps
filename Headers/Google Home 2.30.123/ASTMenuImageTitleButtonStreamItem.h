//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuUUIDStreamItem.h"

@class ASTMenuButtonItem, ASTMenuFixedSizedItem, ASTMenuTextButtonItem, NSString, UIColor;
@protocol ASTMenuImageTitleButtonTableViewCellDelegate;

@interface ASTMenuImageTitleButtonStreamItem : ASTMenuUUIDStreamItem
{
    _Bool _requiresAttention;
    _Bool _isSeparatorViewDisplayed;
    NSString *_title;
    NSString *_subtitle;
    UIColor *_subtitleColor;
    ASTMenuFixedSizedItem *_iconImage;
    ASTMenuButtonItem *_menuButtonItem;
    ASTMenuTextButtonItem *_textButtonItem;
    NSString *_associatedSettingsUUID;
    id <ASTMenuImageTitleButtonTableViewCellDelegate> _cellDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSeparatorViewDisplayed; // @synthesize isSeparatorViewDisplayed=_isSeparatorViewDisplayed;
@property(nonatomic) __weak id <ASTMenuImageTitleButtonTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(copy, nonatomic) NSString *associatedSettingsUUID; // @synthesize associatedSettingsUUID=_associatedSettingsUUID;
@property(nonatomic) _Bool requiresAttention; // @synthesize requiresAttention=_requiresAttention;
@property(retain, nonatomic) ASTMenuTextButtonItem *textButtonItem; // @synthesize textButtonItem=_textButtonItem;
@property(retain, nonatomic) ASTMenuButtonItem *menuButtonItem; // @synthesize menuButtonItem=_menuButtonItem;
@property(copy, nonatomic) ASTMenuFixedSizedItem *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

