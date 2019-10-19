//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError;
@protocol TemplateParserContext;

@protocol CarouselDataSource <NSObject>
@property(readonly, nonatomic) NSError *lastError;
@property(readonly, nonatomic) NSDictionary *analytics;
@property(readonly, nonatomic) id <TemplateParserContext> templateContext;
@property(readonly, copy, nonatomic) NSArray *carouselItems;
- (_Bool)hasMoreContent;
- (void)filterCarouselItems;
@end

