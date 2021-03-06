//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuUUIDStreamItem.h"

@class NSString, UIColor, UIFont;

@interface ASTMenuTitleStreamItem : ASTMenuUUIDStreamItem
{
    _Bool _topBorderHidden;
    _Bool _isSeparatorViewDisplayed;
    NSString *_title;
    NSString *_subtitle;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    UIColor *_backgroundColor;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    double _leftMargin;
    double _bottomMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) _Bool isSeparatorViewDisplayed; // @synthesize isSeparatorViewDisplayed=_isSeparatorViewDisplayed;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic, getter=isTopBorderHidden) _Bool topBorderHidden; // @synthesize topBorderHidden=_topBorderHidden;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

