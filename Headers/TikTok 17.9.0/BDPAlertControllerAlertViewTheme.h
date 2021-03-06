//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPAlertControllerThemeBase.h"

@class UIColor;

@interface BDPAlertControllerAlertViewTheme : BDPAlertControllerThemeBase
{
    double _Width;
    double _maxHeight;
    UIColor *_backgroundColor;
    double _cornerRadius;
    double _minHeight;
    double _contentOnlyMinHeight;
    double _titleOnlyMinHeight;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) double titleOnlyMinHeight; // @synthesize titleOnlyMinHeight=_titleOnlyMinHeight;
@property(nonatomic) double contentOnlyMinHeight; // @synthesize contentOnlyMinHeight=_contentOnlyMinHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double Width; // @synthesize Width=_Width;
- (void).cxx_destruct;
- (id)init;

@end

