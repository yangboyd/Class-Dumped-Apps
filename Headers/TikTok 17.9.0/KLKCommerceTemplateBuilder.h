//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KLKCommerceObject, KLKContentObject, NSMutableArray, NSString;

@interface KLKCommerceTemplateBuilder : NSObject
{
    KLKContentObject *_content;
    KLKCommerceObject *_commerce;
    NSString *_buttonTitle;
    NSMutableArray *_buttons;
}

@property(copy, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) KLKCommerceObject *commerce; // @synthesize commerce=_commerce;
@property(copy, nonatomic) KLKContentObject *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)build;
- (void)addButton:(id)arg1;

@end

