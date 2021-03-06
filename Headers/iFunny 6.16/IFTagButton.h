//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface IFTagButton : UIButton
{
    NSString *_tagText;
    struct CGSize _calculatedSize;
}

+ (double)defaultHeight;
+ (id)createMoreTagsButton;
+ (id)createEditTagsButton;
+ (id)createAddTagsButtonWithColor:(id)arg1;
+ (id)tagButtonWithText:(id)arg1 tagsColor:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize calculatedSize; // @synthesize calculatedSize=_calculatedSize;
@property(readonly, copy, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
- (id)initTagButtonWithText:(id)arg1 tagsColor:(id)arg2 addHashtag:(_Bool)arg3;

@end

