//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextStorage.h>

@class ACCEditPageTextView, ACCWikipediaTextAttachment, NSMutableAttributedString;

@interface ACCEditPageTextStorage : NSTextStorage
{
    ACCEditPageTextView *_textView;
    NSMutableAttributedString *_storage;
    ACCWikipediaTextAttachment *_wikipediaAttachement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACCWikipediaTextAttachment *wikipediaAttachement; // @synthesize wikipediaAttachement=_wikipediaAttachement;
@property(retain, nonatomic) NSMutableAttributedString *storage; // @synthesize storage=_storage;
@property(nonatomic) __weak ACCEditPageTextView *textView; // @synthesize textView=_textView;
- (void)refreshWikipediaAnchorStyle;
- (void)clearUnderlineStyleFirst;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)init;

@end

