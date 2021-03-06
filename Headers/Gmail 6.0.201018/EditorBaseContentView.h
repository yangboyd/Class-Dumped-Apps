//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EditorContentView-Protocol.h"

@class NSString, UITextRange;
@protocol EditorContentViewDelegate, UITextInputDelegate;

@interface EditorBaseContentView : UIView <EditorContentView>
{
    NSString *_plainText;
    id _content;
    id <EditorContentViewDelegate> contentViewDelegate;
    id <UITextInputDelegate> inputDelegate;
    UITextRange *selectedTextRange;
    id tag;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id tag; // @synthesize tag;
@property(retain, nonatomic) UITextRange *selectedTextRange; // @synthesize selectedTextRange;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate;
@property(nonatomic) __weak id <EditorContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate;
@property(readonly, nonatomic) id content; // @synthesize content=_content;
- (id)textInRange:(id)arg1;
- (id)textAtLineNumber:(long long)arg1;
- (id)splitAtPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1 isEndOfRange:(_Bool)arg2;
- (void)removeAttributes:(id)arg1 forRange:(id)arg2;
- (struct CGRect)rectForLineNumber:(long long)arg1;
- (id)positionAtCharacterOffset:(long long)arg1;
- (_Bool)mergeIfPossible:(id)arg1;
- (long long)lineNumberAtPosition:(id)arg1;
- (void)insertContent:(id)arg1 atPosition:(id)arg2;
- (struct CGRect)expandCaretRect:(struct CGRect)arg1;
- (void)deleteContentInRange:(id)arg1;
- (id)contentInRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (long long)characterOffsetAtPosition:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)attributesAtPosition:(id)arg1;
- (void)addAttributes:(id)arg1 forRange:(id)arg2;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) _Bool resizeCausesReflow;
@property(readonly, nonatomic) long long numberOfLines;
@property(readonly, nonatomic) _Bool contentLoadResultsInContentChange;
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, nonatomic) _Bool contentIsExtendable;
@property(readonly, nonatomic) _Bool allowsHorizontalScrolling;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

