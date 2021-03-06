//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASMPromptCarouselBlockCellData, ASMPromptCarouselCard, ASMSummaryBlockCellData, NSString;

@interface ASMBlockCellData : NSObject
{
    ASMPromptCarouselCard *_promptCarousel;
    ASMPromptCarouselBlockCellData *_promptCarouselData;
    ASMSummaryBlockCellData *_summaryData;
    NSString *_accessibilityIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) ASMSummaryBlockCellData *summaryData; // @synthesize summaryData=_summaryData;
@property(readonly, nonatomic) ASMPromptCarouselBlockCellData *promptCarouselData; // @synthesize promptCarouselData=_promptCarouselData;
@property(readonly, nonatomic) ASMPromptCarouselCard *promptCarousel; // @synthesize promptCarousel=_promptCarousel;
- (unsigned long long)calculateSpacingForCurrentBlock:(id)arg1 withAdjacentBlock:(id)arg2;
- (id)initWithSummaryBlockAtIndex:(unsigned long long)arg1 inCard:(id)arg2 accessibilityIdentifier:(id)arg3;
- (id)initWithPromptCarousel:(id)arg1 accessibilityIdentifier:(id)arg2;

@end

