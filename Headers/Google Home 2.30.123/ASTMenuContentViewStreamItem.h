//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuUUIDStreamItem.h"

@class UIColor, UIView;

@interface ASTMenuContentViewStreamItem : ASTMenuUUIDStreamItem
{
    _Bool _isSeparatorViewDisplayed;
    _Bool _isContentViewBorderDisplayed;
    UIColor *_backgroundColor;
    long long _selectionStyle;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool isContentViewBorderDisplayed; // @synthesize isContentViewBorderDisplayed=_isContentViewBorderDisplayed;
@property(nonatomic) _Bool isSeparatorViewDisplayed; // @synthesize isSeparatorViewDisplayed=_isSeparatorViewDisplayed;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentView:(id)arg1;

@end

