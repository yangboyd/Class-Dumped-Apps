//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTextField.h"

#import "GWAMegalogsSupporting-Protocol.h"

@class GWAMegalogsContext, GWATextFieldFormatter, NSArray, NSNumber, NSString, UIPasteboard;
@protocol NSCopying;

@interface GWAFormattableTextField : GOOTextField <GWAMegalogsSupporting>
{
    NSString *_formatted;
    NSString *_maskCharacters;
    long long _redactionScheme;
    UIPasteboard *_securePasteBoard;
    _Bool _secureTextField;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    GWATextFieldFormatter *_formatter;
    id <NSCopying> _parentID;
}

@property(retain, nonatomic) id <NSCopying> parentID; // @synthesize parentID=_parentID;
@property(retain, nonatomic) GWATextFieldFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic, getter=isSecureTextField) _Bool secureTextField; // @synthesize secureTextField=_secureTextField;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
- (void).cxx_destruct;
- (void)prepareMegalogsContexts;
- (void)dealloc;
- (struct _NSRange)rangeFromSelectedRange;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setErrorMessageWithExtraWidth:(double)arg1;
- (void)setExtendedPresentationStyle:(long long)arg1;
- (void)deleteBackward;
- (id)accessibilityHint;
- (void)setRedactionScheme:(long long)arg1 maskCharacters:(id)arg2;
- (struct _NSRange)selectedRange;
- (void)copyTextToSecurePasteBoard;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)text;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

