//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNStorageControllersConvertersCustomStatusConverter, DYNStorageControllersConvertersDndStatusConverter;

@interface DYNStorageControllersConvertersUserStatusConverter : NSObject
{
    DYNStorageControllersConvertersCustomStatusConverter *customStatusConverter_;
    DYNStorageControllersConvertersDndStatusConverter *dndStatusConverter_;
}

- (void)dealloc;
- (id)convertWithDYNSDataModelsUserStatus:(id)arg1;
- (id)convertWithComGoogleAppsDynamiteV1MobileUserStatusStorage:(id)arg1;

@end

