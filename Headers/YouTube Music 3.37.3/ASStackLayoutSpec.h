//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASLayoutSpec.h"

@interface ASStackLayoutSpec : ASLayoutSpec
{
    unsigned char _direction;
    unsigned char _horizontalAlignment;
    unsigned char _verticalAlignment;
    unsigned char _justifyContent;
    unsigned char _alignItems;
    unsigned char _flexWrap;
    unsigned char _alignContent;
    _Bool _concurrent;
    double _spacing;
    double _lineSpacing;
}

+ (id)horizontalStackLayoutSpec;
+ (id)verticalStackLayoutSpec;
+ (id)stackLayoutSpecWithDirection:(unsigned char)arg1 spacing:(double)arg2 justifyContent:(unsigned char)arg3 alignItems:(unsigned char)arg4 flexWrap:(unsigned char)arg5 alignContent:(unsigned char)arg6 lineSpacing:(double)arg7 children:(id)arg8;
+ (id)stackLayoutSpecWithDirection:(unsigned char)arg1 spacing:(double)arg2 justifyContent:(unsigned char)arg3 alignItems:(unsigned char)arg4 flexWrap:(unsigned char)arg5 alignContent:(unsigned char)arg6 children:(id)arg7;
+ (id)stackLayoutSpecWithDirection:(unsigned char)arg1 spacing:(double)arg2 justifyContent:(unsigned char)arg3 alignItems:(unsigned char)arg4 children:(id)arg5;
@property(nonatomic, getter=isConcurrent) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned char alignContent; // @synthesize alignContent=_alignContent;
@property(nonatomic) unsigned char flexWrap; // @synthesize flexWrap=_flexWrap;
@property(nonatomic) unsigned char alignItems; // @synthesize alignItems=_alignItems;
@property(nonatomic) unsigned char justifyContent; // @synthesize justifyContent=_justifyContent;
@property(nonatomic) unsigned char verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) unsigned char horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) unsigned char direction; // @synthesize direction=_direction;
- (id)propertiesForDescription;
- (void)resolveVerticalAlignment;
- (void)resolveHorizontalAlignment;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1;
- (id)initWithDirection:(unsigned char)arg1 spacing:(double)arg2 justifyContent:(unsigned char)arg3 alignItems:(unsigned char)arg4 flexWrap:(unsigned char)arg5 alignContent:(unsigned char)arg6 lineSpacing:(double)arg7 children:(id)arg8;
- (id)init;
- (id)asciiArtString;

@end

