//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFNItemsDataViewAdapter, TFNItemsDataViewSectionController;

@interface TFNDataViewItem : NSObject
{
    NSMutableDictionary *_options;
    id _item;
    TFNItemsDataViewAdapter *_dataViewAdapter;
    TFNItemsDataViewSectionController *_sectionController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) TFNItemsDataViewSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain, nonatomic) TFNItemsDataViewAdapter *dataViewAdapter; // @synthesize dataViewAdapter=_dataViewAdapter;
@property(retain, nonatomic) id item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1;

@end

