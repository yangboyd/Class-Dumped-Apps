//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGProConversionCategoriesDataSource, NSArray;
@protocol IGProConversionCategoriesPreloaderDelegate;

@interface IGProConversionCategoriesPreloader : NSObject
{
    IGProConversionCategoriesDataSource *_dataSource;
    NSArray *_categories;
    id <IGProConversionCategoriesPreloaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProConversionCategoriesPreloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void)_handleCategoriesResult:(_Bool)arg1 categories:(id)arg2 error:(id)arg3;
- (void)preloadCreatorCategoriesBySuperCategoryId:(id)arg1;
- (void)preloadBusinessCategoriesByPageName:(id)arg1;
- (void)preloadMergedProCategories;
- (id)initWithActorAccount:(id)arg1 concurrentUserSessionHandler:(id)arg2 experimentProvider:(id)arg3;

@end

