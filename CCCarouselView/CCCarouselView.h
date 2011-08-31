//
//  CCCarouselView.h
//  CCCarouselView
//
//  Created by Jont Olof Lyttkens on 2011-08-29.
//  Copyright 2011 Mobile Strategist and iOS Developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCCarouselViewCell.h"

@class CCCarouselView;

@protocol CCCarouselViewDataSource <NSObject>
- (NSUInteger)numberOfCellsInCarouselView:(CCCarouselView *)carouselView;
- (BOOL)wantsLoopingForCarouselView:(CCCarouselView *)carouselView;
- (CGSize)cellSizeInCarouselView:(CCCarouselView *)carouselView;
//- (CCCarouselViewCell *)cellAtIndexPath:(NSIndexPath *)indexPath;
- (UIEdgeInsets)edgeInsetInCarouselView:(CCCarouselView *)carouselView;
@end

@protocol CCCarouselViewDelegate <UIScrollViewDelegate>
- (void)carouselView:(CCCarouselView *) didSelectCellAtIndexPath:(NSIndexPath *)indexPath;
@end

@interface CCCarouselView : UIScrollView {
    id <CCCarouselViewDelegate>   delegate_;
	id <CCCarouselViewDataSource> dataSource_;
}
@property (nonatomic, assign) IBOutlet id <CCCarouselViewDelegate>   delegate;
@property (nonatomic, assign) IBOutlet id <CCCarouselViewDataSource> dataSource;
=======
@interface CCCarouselView : UIScrollView 
<
CCCarouselViewCellDelegate
>
{
    
}
- (CCCarouselViewCell *)dequeueReusableCell;
>>>>>>> CCCarouselViewCell
@end
