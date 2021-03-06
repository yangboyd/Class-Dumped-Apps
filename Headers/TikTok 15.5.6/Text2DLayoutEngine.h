//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSMutableArray, NSString, UIFont;

@interface Text2DLayoutEngine : NSObject
{
    int _lineCount;
    int _letterSpacing;
    int _type;
    char *_bitmapData;
    NSMutableArray *_lineBounds;
    NSString *_sourceString;
    NSDictionary *_attributes;
    UIFont *_font;
    NSMutableArray *_segmentedStringArray;
    NSAttributedString *_finalAttrString;
    struct CGSize _bitmapSize;
    struct CGSize _boundingSize;
}

@property(copy, nonatomic) NSAttributedString *finalAttrString; // @synthesize finalAttrString=_finalAttrString;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *segmentedStringArray; // @synthesize segmentedStringArray=_segmentedStringArray;
@property(nonatomic) int letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) struct CGSize boundingSize; // @synthesize boundingSize=_boundingSize;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
@property(retain, nonatomic) NSMutableArray *lineBounds; // @synthesize lineBounds=_lineBounds;
@property(nonatomic) char *bitmapData; // @synthesize bitmapData=_bitmapData;
@property(nonatomic) struct CGSize bitmapSize; // @synthesize bitmapSize=_bitmapSize;
@property(nonatomic) int lineCount; // @synthesize lineCount=_lineCount;
- (void).cxx_destruct;
- (double)_fontSizeToFitWithString:(id)arg1 width:(double)arg2;
- (void)_neonLayout;
- (void)_standardLayout;
- (void)_combineForShakeEffect:(id)arg1;
- (void)_combineForNeonEffect:(id)arg1;
- (id)_tokenizeString:(id)arg1;
- (void)layout;
- (id)initWithWidthConstraint:(double)arg1 sourceString:(id)arg2 font:(id)arg3 paragraphStyle:(id)arg4 letterSpacing:(int)arg5 type:(int)arg6;

@end

