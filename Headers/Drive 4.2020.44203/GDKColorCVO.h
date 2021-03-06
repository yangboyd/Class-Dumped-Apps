//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOContentViewObject-Protocol.h"

@class NSString, UIColor;

@interface GDKColorCVO : NSObject <GOOContentViewObject>
{
    _Bool _selected;
    UIColor *_color;
    long long _colorPaletteIndex;
    NSString *_colorLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *colorLabel; // @synthesize colorLabel=_colorLabel;
@property(nonatomic) long long colorPaletteIndex; // @synthesize colorPaletteIndex=_colorPaletteIndex;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (Class)contentViewClass;
- (id)initWithColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

