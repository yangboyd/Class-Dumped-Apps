//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCOperaSubviewLayoutConfig : NSObject
{
    unsigned long long _style;
    double _verticalOffset;
    double _diagonalLength;
    double _aspectRatio;
    unsigned long long _docking;
    unsigned long long _verticalAlignment;
    unsigned long long _horizontalAlignment;
    double _verticalMargin;
    double _horizontalMargin;
}

+ (id)layoutConfigWithVerticalAlignment:(unsigned long long)arg1 horizontalAlignment:(unsigned long long)arg2 verticalMargin:(double)arg3 horizontalMargin:(double)arg4;
+ (id)layoutConfigWithHeightToWidthAspectRatio:(double)arg1 docking:(unsigned long long)arg2 verticalOffset:(double)arg3;
+ (id)layoutConfigWithDiagonalLength:(double)arg1 verticalOffset:(double)arg2;
+ (id)layoutConfigWithVerticalOffset:(double)arg1;
@property(readonly, nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(readonly, nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(readonly, nonatomic) unsigned long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(readonly, nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(readonly, nonatomic) unsigned long long docking; // @synthesize docking=_docking;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) double diagonalLength; // @synthesize diagonalLength=_diagonalLength;
@property(readonly, nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)initWithVerticalAlignment:(unsigned long long)arg1 horizontalAlignment:(unsigned long long)arg2 verticalMargin:(double)arg3 horizontalMargin:(double)arg4;
- (id)initWithHeightToWidthAspectRatio:(double)arg1 docking:(unsigned long long)arg2 verticalOffset:(double)arg3;
- (id)initWithDiagonalLength:(double)arg1 verticalOffset:(double)arg2;
- (id)initWithVerticalOffset:(double)arg1;

@end

