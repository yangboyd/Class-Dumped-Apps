//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSString, SharedImageItemProvider;

@interface SharedURLItemProvider : UIActivityItemProvider
{
    SharedImageItemProvider *_imageProvider;
    NSString *_urlString;
    NSString *_title;
    NSString *_subject;
}

+ (id)sharedItemWithURLString:(id)arg1 title:(id)arg2 type:(id)arg3;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property __weak SharedImageItemProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;

@end

