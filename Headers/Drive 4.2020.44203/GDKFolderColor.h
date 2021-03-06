//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDKFolderColor : NSObject
{
    _Bool _defaultColor_12;
    NSString *_label_5;
    NSString *_lightColor_10;
    NSString *_darkColor_9;
    long long _colorPaletteIndex_17;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDefaultColor) _Bool defaultColor; // @synthesize defaultColor=_defaultColor_12;
@property(readonly, nonatomic) long long colorPaletteIndex; // @synthesize colorPaletteIndex=_colorPaletteIndex_17;
@property(readonly, copy, nonatomic) NSString *darkColor; // @synthesize darkColor=_darkColor_9;
@property(readonly, copy, nonatomic) NSString *lightColor; // @synthesize lightColor=_lightColor_10;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label_5;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLabel:(id)arg1 lightColor:(id)arg2 darkColor:(id)arg3 colorPaletteIndex:(long long)arg4 defaultColor:(_Bool)arg5;

@end

