//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIFont;

@interface PillStyle : NSObject <NSCopying>
{
    SEL _fontSelector;
    double _cornerRadius;
    unsigned long long _type;
    double _minWidth;
    struct UIEdgeInsets _insets;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 attributedString:(id)arg2 minWidth:(double)arg3 edgeInsets:(struct UIEdgeInsets)arg4;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) SEL fontSelector; // @synthesize fontSelector=_fontSelector;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 attributedString:(id)arg2;
@property(readonly, nonatomic) double height;
- (id)attributes;
@property(readonly, nonatomic) UIFont *font;
- (id)initWithPillSizeType:(unsigned long long)arg1;

@end

