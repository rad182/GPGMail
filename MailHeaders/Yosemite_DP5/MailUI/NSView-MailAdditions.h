/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

@interface NSView (MailAdditions)
- (id)newRenderedSnapshotForLayerBackedView:(struct CGRect)arg1;
- (id)newSnapshotForLayerBackedView;
- (struct CGRect)rectInScreenCoords:(struct CGRect)arg1;
- (id)newSnapshotIgnoringSubviewsWithRect:(struct CGRect)arg1;
- (id)newRenderedSnapshotWithRect:(struct CGRect)arg1 allowAlpha:(BOOL)arg2 forceScaleFactor:(double)arg3;
- (id)newFullRenderedSnapshot;
- (id)newSnapshotWithRect:(struct CGRect)arg1;
- (BOOL)_testIsHIDPI;
@end

