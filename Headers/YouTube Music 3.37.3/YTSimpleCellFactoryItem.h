//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe;

@interface YTSimpleCellFactoryItem : NSObject
{
    CDUnknownBlockType _creationBlock;
    GIMMe *_gimme;
    Class _cellClass;
}

@property(readonly, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)createCellControllerForEntry:(id)arg1 parentResponder:(id)arg2;
- (id)initWithCellClass:(Class)arg1;
- (id)initWithCellClass:(Class)arg1 controllerCreationBlock:(CDUnknownBlockType)arg2;

@end

