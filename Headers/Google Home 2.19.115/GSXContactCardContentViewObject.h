//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class CDRContactSuggestion, NSString, NSURL, UIFont;

@interface GSXContactCardContentViewObject : GOOBaseContentViewObject
{
    CDRContactSuggestion *_contact;
    UIFont *_font;
    NSString *_contactName;
    NSURL *_contactImageURL;
}

@property(readonly, copy, nonatomic) NSURL *contactImageURL; // @synthesize contactImageURL=_contactImageURL;
@property(readonly, copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(readonly, copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) CDRContactSuggestion *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithContact:(id)arg1;

@end

