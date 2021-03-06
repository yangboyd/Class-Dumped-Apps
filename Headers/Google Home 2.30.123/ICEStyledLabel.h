//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICESimpleLabel.h"

@class NSArray, NSAttributedString, NSMutableArray, UIColor, UIGestureRecognizer, _ICELinkInteractionLocation;
@protocol ICEStyledLabelInteractionDelegate;

@interface ICEStyledLabel : ICESimpleLabel
{
    NSAttributedString *_attributedString;
    _Bool _hasStrikethroughs;
    _ICELinkInteractionLocation *_firstLinkInteraction;
    struct __CTFrame *_textFrame;
    _Bool _areLinksClickable;
    _Bool _areLinksUnderlined;
    _Bool _areLinksAccessible;
    _Bool _alwaysShowsTruncationString;
    _Bool _copyGestureEnabled;
    _Bool _shouldUpdateAccessibilityElements;
    id <ICEStyledLabelInteractionDelegate> _interactionDelegate;
    UIColor *_highlightedLinkBackgroundColor;
    NSAttributedString *_truncationAttributedString;
    _ICELinkInteractionLocation *_activeLinkInteraction;
    UIGestureRecognizer *_longPressGestureRecognizer;
    NSArray *_accessibilityElements;
    NSMutableArray *_seenBoundsSizes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *seenBoundsSizes; // @synthesize seenBoundsSizes=_seenBoundsSizes;
@property(nonatomic) _Bool shouldUpdateAccessibilityElements; // @synthesize shouldUpdateAccessibilityElements=_shouldUpdateAccessibilityElements;
@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) UIGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) _ICELinkInteractionLocation *activeLinkInteraction; // @synthesize activeLinkInteraction=_activeLinkInteraction;
@property(nonatomic) _Bool copyGestureEnabled; // @synthesize copyGestureEnabled=_copyGestureEnabled;
@property(nonatomic) _Bool alwaysShowsTruncationString; // @synthesize alwaysShowsTruncationString=_alwaysShowsTruncationString;
@property(retain, nonatomic) NSAttributedString *truncationAttributedString; // @synthesize truncationAttributedString=_truncationAttributedString;
@property(nonatomic) _Bool areLinksAccessible; // @synthesize areLinksAccessible=_areLinksAccessible;
@property(nonatomic) _Bool areLinksUnderlined; // @synthesize areLinksUnderlined=_areLinksUnderlined;
@property(nonatomic) _Bool areLinksClickable; // @synthesize areLinksClickable=_areLinksClickable;
@property(retain, nonatomic) UIColor *highlightedLinkBackgroundColor; // @synthesize highlightedLinkBackgroundColor=_highlightedLinkBackgroundColor;
@property(nonatomic) __weak id <ICEStyledLabelInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)boundsForRun:(const struct __CTRun *)arg1 inLine:(const struct __CTLine *)arg2 withOrigin:(struct CGPoint)arg3;
- (struct CGRect)rectForRange:(struct _NSRange)arg1 inLine:(const struct __CTLine *)arg2 lineOrigin:(struct CGPoint)arg3;
- (id)rectsForLink:(id)arg1;
- (_Bool)isPoint:(struct CGPoint)arg1 nearLink:(id)arg2;
- (id)linkAtCharacterIndex:(unsigned long long)arg1;
- (struct CGRect)boundsForLine:(const struct __CTLine *)arg1 origin:(struct CGPoint)arg2;
- (unsigned long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (id)mutableAttributedStringFromText:(id)arg1;
- (id)currentTextColor;
- (struct CGAffineTransform)transformForCoreText;
- (id)convertedAttributedString:(id)arg1 hasStrikeThroughs:(_Bool *)arg2;
- (id)mutableAttributedStringWithStyles;
- (void)drawActiveLinkHighlightForRect:(struct CGRect)arg1;
- (void)drawAttributedString:(id)arg1 inRect:(struct CGRect)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 limitedToNumberOfLines:(long long)arg2 numberOfDisplayedLines:(unsigned long long *)arg3;
- (void)drawLine:(const struct __CTLine *)arg1 atOrigin:(struct CGPoint)arg2 context:(struct CGContext *)arg3;
- (long long)numberOfDisplayedLines;
- (void)attributedTextDidChange;
- (void)longPressGestureRecognized:(id)arg1;
- (void)updateAccessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
- (void)setAttributedString:(id)arg1;
- (id)attributedString;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 numberOfDisplayedLines:(unsigned long long *)arg2;
- (void)configure;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

