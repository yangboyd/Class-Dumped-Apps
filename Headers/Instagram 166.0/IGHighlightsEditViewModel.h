//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface IGHighlightsEditViewModel : NSObject
{
    NSString *_title;
    UIImage *_emptyViewIcon;
    NSString *_emptyViewTitle;
    NSString *_emptyViewSubtitle;
}

+ (id)defaultHighlightsModelForReelPK:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *emptyViewSubtitle; // @synthesize emptyViewSubtitle=_emptyViewSubtitle;
@property(readonly, copy, nonatomic) NSString *emptyViewTitle; // @synthesize emptyViewTitle=_emptyViewTitle;
@property(readonly, nonatomic) UIImage *emptyViewIcon; // @synthesize emptyViewIcon=_emptyViewIcon;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 emptyViewIcon:(id)arg2 emptyViewTitle:(id)arg3 emptyViewSubtitle:(id)arg4;

@end

